
let numbers = process.argv.slice(2)
	.map(x => {
		let n = parseInt(x);

		if (isNaN(n)) {
			console.error(`error: '${x}' is not a valid number`);
			process.exit(1);
		}

		return n;
	});

numbers.sort();

numbers.forEach(x => console.log(x));
