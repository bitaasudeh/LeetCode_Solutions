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
  def isSymmetric(root: TreeNode): Boolean = {
    if (root == null) true
    else sym(root.left, root.right)
  }
  private def sym(left: TreeNode, right: TreeNode): Boolean = {
    if (left == null && right == null) true
    else if (left == null && right != null) false
    else if (left != null && right == null) false
    else if (left.value != right.value) false
    else sym(left.left, right.right) && sym(left.right, right.left)
  }
}

object Main extends App {
  val root2 = new TreeNode(1)
  root2.left = new TreeNode(2)
  root2.right = new TreeNode(2)
  root2.left.right = new TreeNode(3)
  root2.right.right = new TreeNode(3)

  println(
    "Test Case : Expected = false, Actual = " + Solution.isSymmetric(root2)
  )
}
