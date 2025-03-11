error id: 
file:///D:/programming/ScalaProject/validanagram/src/main/scala/Main.scala
empty definition using pc, found symbol in pc: 
empty definition using semanticdb
|empty definition using fallback
non-local guesses:
	 -

Document text:

```scala
import scala.collection.mutable.HashMap
object Solution 
{
    def isAnagram(s: String, t: String): Boolean = 
    {   
        //count occurance of each character 
        //.getOrElse(char,0)+1:  If there is a value → return it.  ||  If there is no value (None)           → return the default.
        var Counters= HashMap[Char,Int]()
        for (char<-s)
        {
           Counters(char)=Counters.getOrElse(char,0)+1 
        }
        
        var Countert=HashMap[Char,Int]()
        for (char<-t)
        {
            Countert(char)=Countert.getOrElse(char,0)+1
        }
        // instead of if, we could simply write Counters==Countert, so the following snippet of           code is not necessary
        //Counters==Countert
        if (Counters==Countert)
        {
            return true;
        }
         else
        return false;
    }
}
object Main extends App {
  println("Hello, World!")
}

```

#### Short summary: 

empty definition using pc, found symbol in pc: 