#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int cmp(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int is_number(const char* str) {
	if (str[0] == '-') {
		str++;
	}
	
	if (str[0] == '\0') {
		return 0;
	}

	for (size_t i = 0; str[i]; i++) {
		if (!isdigit(str[i])) {
			return 0;
		}
	}

	return 1;
}

int main(int argc, char** argv) {
	size_t size = 0;
	int* numbers = malloc((argc - 1) * sizeof(int));

	if (numbers == NULL) {
		fprintf(stderr, "error: EOM\n");
		return 1;
	}

	for (int i = 1; i < argc; i++) {
		if (!is_number(argv[i])) {
			fprintf(stderr, "error: '%s' is not a valid number\n", argv[i]);
			return 1;
		}

		numbers[size++] = atoi(argv[i]);
	}

	qsort(numbers, size, sizeof(int), cmp);

	for (int i = 0; i < size; i++) {
		printf("%d\n", numbers[i]);
	}

	free(numbers);

	return 0;
}
