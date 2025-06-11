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
  def isValidBST(root: TreeNode): Boolean = {
    def valid(node: TreeNode, low: Long, high: Long): Boolean = {
      if (node == null) return true
      if (node.value <= low || node.value >= high) return false
      return valid(node.left, low, node.value) && valid(
        node.right,
        node.value,
        high
      )
    }
    return valid(root, Long.MinValue, Long.MaxValue)
  }
}

object Main extends App {
  val root = new TreeNode(1)
  root.left = new TreeNode(2)
  root.right = new TreeNode(2)
  root.left.right = new TreeNode(3)
  root.right.right = new TreeNode(3)
  print(Solution.isValidBST(root))
}
