#include "test.h"

using namespace std;

// 二叉树
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

ostream& operator<<(ostream& os, TreeNode* ans) {
    //将二叉树以数组形式打印.层序遍历
    queue<TreeNode*> que;
    if(ans!=nullptr) que.push(ans);
    vector<vector<int>> result;
    TreeNode* dummy=new TreeNode(INT32_MAX);
    while(!que.empty()){
        int size=que.size();
        vector<int> vec;
        for(int i=0; i<size; i++){
            TreeNode* node = que.front();
            que.pop();
            if(node->val!=INT32_MAX){
                vec.push_back(node->val);
            }
            else{
                vec.push_back(INT32_MAX);
            }
            if(node!=dummy){
                if(node->left) que.push(node->left);
                else que.push(dummy);
                if(node->right) que.push(node->right);
                else que.push(dummy);
            }
        }
        result.push_back(vec);
    }
    os << "[" << " ";
    for(int i=0;i<result.size()-1;i++){
        for(int j=0;j<result[i].size();j++)
            if(result[i][j]!=INT32_MAX)
                os << result[i][j] << " ";
            else
                os << "null" << " ";
    }
    os <<"]";
    return os << endl;
}

// 链表
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next1) : val(x), next(next1) {}
};

ostream& operator<<(ostream& os, ListNode* lp) {
    ListNode* cur = lp;
    while (cur != nullptr) {
        os << cur->val << " -> ";
        cur = cur->next;
    }
    os << "∅";
    return os << endl;
}

ostream& operator<<(ostream& os, vector<vector<int>>& ans) {
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            os << ans[i][j] << " ";
            if(j == ans[i].size() - 1)
                os << endl;
        }
    }
    return os << endl;
}

// 构建二叉树
TreeNode *ConstructBinaryTree(vector<int>& vec, int len, int i){
    if (vec.empty() || len < 1) return nullptr;
    TreeNode *root = NULL;
    if (i < len && vec[i] != 'null'){
        root = new TreeNode(0);
        if (root == nullptr) return nullptr;
        root->val = vec[i];
        root->left = ConstructBinaryTree(vec, len, 2 * i + 1);
        root->right = ConstructBinaryTree(vec, len, 2 * i + 2);
    }
    return root;
}


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
    }
};


int main(){  
    // //在这里定义好函数中的测试数据

    // 链表
    // ListNode* head = new ListNode(1);
    // ListNode* cur = head;
    // for (auto& i : {2, 3, 4}) {
    //     cur->next = new ListNode(i);
    //     cur = cur->next;
    // }
    // cout << head;

    // 二叉树
    TreeNode *root;
    vector<int> data{3, 9, 20, 'null', 'null',  15, 7};
    root = ConstructBinaryTree(data, data.size(), 0);
    cout << root;

    // 测试输出
    vector<vector<int>> ans;
    Solution s;
    ans = s.levelOrder(root);
    cout << ans;

    delete root;
    return 0;    
}
