solve [] = []
solve (a:b:rest) = abs(a - b):(solve rest)

-- words
readInput = (map read) . words
writeOutput = unlines . (map show)

main = interact (writeOutput . solve . readInput)