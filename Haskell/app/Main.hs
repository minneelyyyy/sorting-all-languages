module Main where

import System.Environment
import Data.List
import System.Exit
import Text.Read

-- TODO: make this handle parse error
convert :: String -> Integer
convert = read

main :: IO ()
main = do
    args <- getArgs
    numbers <- map convert args
    sequence_ (map print (sort numbers))

