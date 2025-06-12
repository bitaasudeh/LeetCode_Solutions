object Solution {
  def merge(nums1: Array[Int], m: Int, nums2: Array[Int], n: Int): Unit = {
    var i = m - 1
    var j = n - 1
    var k = m + n - 1
    while (i >= 0 && j >= 0) {
      if (nums1(i) > nums2(j)) {
        nums1(k) = nums1(i)
        i -= 1
      } else {
        nums1(k) = nums2(j)
        j -= 1
      }
      k -= 1
    }
    while (j >= 0) {
      nums1(k) = nums2(j)
      j -= 1
      k -= 1
    }
  }
}

object Main extends App {
  val nums1 = Array(1, 2, 3, 0, 0, 0)
  val nums2 = Array(2, 3, 4)
  val m = 3
  val n = 3
  Solution.merge(nums1, m, nums2, n)
  println("Merged array: " + nums1.mkString(", "))
}
