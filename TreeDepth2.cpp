/* Author: Zhuoming Huang
*  Date: 03/10/2022
*  File: TreeDepth2.cpp
*  C++20
*/
/* Tree Depth
*   A tree is represent by a string of parentheses
*   A pair of open parenthesis and close parenthesis represents a node
*   Find the maxDepth of the tree
*/

/* Method 2 (more complicated than method 1):
*   1. Using vector
*   2. When an open parenthesis is read, go to next row
*   3. When a close parenthesis is read, go back to previous row
*   4. Obtain the number of rows as the depth of tree
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main ()
{
    std::string line;
    
    int maxDepth = 0, curDepth = 0; // depth of tree, and current depth
    vector<vector<char>> vec{{'*'}};
    vector<char>temp;
    
    while(true) {
        getline(cin, line);
        if (line.empty()||line[0]==')') {
            cout << -1 << endl;
            continue;
        }
        curDepth++; // a valid tree has at least one node with depth of 1.
        //line = "((()((()())))()(()))";
        
        for (int i = 1; i < line.length()-1; i++) {
            if (line[i-1] == '(' && line[i] == '(' ) {
                if (curDepth != vec.size()) {
                    vec[curDepth].push_back('*');  
                    continue;
                }
                temp.push_back('*');
                vec.push_back(temp);
                temp = {};
                curDepth++;
            } else if (line[i-1] == ')' && line[i] == '(') {
                vec[curDepth-1].push_back('*');  
            } else if (line[i-1] == ')' && line[i] == ')') {
                curDepth--; 
            } 
        }
        maxDepth = vec.size();
        cout << maxDepth << endl;
        
        /* 
        // print the tree
        for (int i = 0; i < vec.size(); i++) {
            for (int j = 0; j < vec[i].size(); j++)
                cout << vec[i][j] << " ";
            cout << endl;
        }
        */
        
        vec = {{'*'}};
    }
    return 0;
}