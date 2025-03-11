import scala.collection.mutable.HashMap
object Solution {
  def firstUniqChar(s: String): Int = {

    var lettercounts = HashMap[Char, Int]()

    // count occurance of each character
    for (char <- s) {
      lettercounts(char) = lettercounts.getOrElse(char, 0) + 1
    }

    // Find the firt unique character

    s.indexWhere(char => lettercounts(char) == 1) match {
      case index => index
    }
  }
}

object Main extends App {
  println(Solution.firstUniqChar("ilovescala"))
  println(Solution.firstUniqChar("loveleetcode"))
}
