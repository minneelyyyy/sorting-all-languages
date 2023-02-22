module Main where

import System.Environment
import Data.List
import System.Exit
import Text.Read (readMaybe)
import System.IO

convert :: String -> Either String Int
convert s = case readMaybe s of
    Just n -> Right n
    Nothing -> Left $ "error: '" ++ s ++ "' is not a valid number"

main :: IO ()
main = do
    args <- getArgs
    let numbers = map convert args
    case sequence numbers of
        Left s -> do
            hPutStrLn stderr s
            exitWith $ ExitFailure 1
        Right ns -> mapM_ print $ sort ns

