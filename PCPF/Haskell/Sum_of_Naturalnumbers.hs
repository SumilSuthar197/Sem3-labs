--find sum of n natural numbers 
fun::Int->Int
fun n|n==0=0
fun n|n/=0=n+fun(n-1)
main = do
       putStrLn("Enter a number")
       ain<- getLine
       let a=(read ain :: Int)
       putStrLn("The sum of natural numbers is")
       print(fun a)
       
