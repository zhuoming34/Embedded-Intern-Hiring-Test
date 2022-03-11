/* Author: Zhuoming Huang
*  Date: 03/10/2022
*  File: TreeDepth1.cpp
*  c++20
*/
/* Tree Depth
*   A tree is represent by a string of parentheses
*   A pair of open parenthesis and close parenthesis represents a node
*   Find the maxDepth of the tree
*/

/* Method 1 (simple):
*  Record the largest depth by counting open and close parentheses
*/

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    std::string line;
    
    int maxDepth = 0, curDepth = 0; // depth of tree, and current depth
    int N_open = 0, N_close = 0; // number of open/close parentheses
    
    while(true) {
        getline(cin, line);
        if (line.empty()||line[0]==')') {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < line.length(); i++) {
            if (maxDepth < curDepth) {
                maxDepth = curDepth;
            }
            if (line[i] == '(') {
                curDepth++;
                N_open++;
            } else if (line[i] == ')') {
                curDepth--;
                N_close++;
            }
        } 
        
        /* when input is invalid, print -1 */
        if ((N_open!=N_close) || (N_open==N_close && maxDepth==0)) {
            cout << -1 << endl;
            continue;
        } 
        
        cout << maxDepth << endl;
        maxDepth = 0;
        curDepth = 0;
    }
    return 0;
}