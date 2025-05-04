class TreeNode(
    _value: Int = 0,
    _left: TreeNode = null,
    _right: TreeNode = null
) {
  var value: Int = _value
  var left: TreeNode = _left
  var right: TreeNode = _right
}

object Solution {
  def maxDepth(root: TreeNode): Int = {
    if (root == null) 0
    else {
      val Ldepth = maxDepth(root.left)
      val Rdepth = maxDepth(root.right)
      math.max(Ldepth, Rdepth) + 1
    }
  }

  def main(args: Array[String]): Unit = {
    val root = new TreeNode(5)
    root.left = new TreeNode(3)
    root.left.left = new TreeNode(4)
    root.left.right = new TreeNode(3)
    root.left.right.left = new TreeNode(1)
    root.right = new TreeNode(5)

    println(maxDepth(root))
  }
}
