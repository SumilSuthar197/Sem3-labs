--perform multiplication within a list  

mult [] = 1
mult(n:ns)= n * mult(ns)
main = do
      putStrLn"Enter 1st element of the list:"
      ain<-getLine
      let a=(read ain :: Int)
      putStrLn"Enter 2nd element of the list:"
      bin<-getLine
      let b=(read bin :: Int)
      putStrLn"Enter 3rd element of the list:"
      cin<-getLine
      let c=(read cin :: Int)
      let list=[a,b,c]
      print(mult list)
