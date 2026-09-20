import Data.List (intercalate)

-- Calculate the letter grade based on average score
calculateGrade :: Double -> Char
calculateGrade avg
    | avg >= 90 = 'A'
    | avg >= 80 = 'B'
    | avg >= 70 = 'C'
    | avg >= 60 = 'D'
    | otherwise = 'F'

-- Calculate average of three scores
calculateAverage :: Double -> Double -> Double -> Double
calculateAverage math science english = (math + science + english) / 3

-- Process a single student's grades
processStudent :: String -> Double -> Double -> Double -> String
processStudent name math science english =
    let avg = calculateAverage math science english
        grade = calculateGrade avg
    in name ++ ": Average = " ++ show avg ++ ", Grade = " ++ [grade]

-- Main function with multiple students
main :: IO ()
main = do
    putStrLn "=== Student Grade Calculator ==="
    putStrLn ""
    
    -- Example: Process multiple students
    let students = 
            [ ("Alice", 85, 90, 88)
            , ("Bob", 92, 95, 89)
            , ("Charlie", 78, 75, 82)
            , ("Diana", 65, 70, 68)
            ]
    
    -- Map the processStudent function over all students
    let results = map (\(name, math, science, english) -> 
                        processStudent name math science english) 
                      students
    
    -- Print all results
    mapM_ putStrLn results
    
    putStrLn ""
    putStrLn "Thank you for using the calculator!"
