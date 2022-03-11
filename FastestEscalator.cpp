/* Author: Zhuoming Huang
*  Date: 03/10/2022
*  File: FastestEscalator.c
*/
/* Fastest Escalator
*   1. Find the minimum time to reach the top
*   2. Input format: {{7,3,2},
*                     {3,6,1}}
*   {Left branch duration, Right branch duration, crossroad duration}
*
*/

#include <iostream>
#include <vector>

using namespace std;


void minTime(vector<vector<int>> Durations) {
    int Time = 0;
    int row = Durations.size();
    int col = Durations[0].size();
    int temp;
    
    for (int i=0; i<row; i++) {
        if (Durations[i][0] < (Durations[i][1]+Durations[i][2])) {
            Time += Durations[i][0];
            if (i+1 <= row-1) {
                temp = Durations[i+1][0];
                Durations[i+1][0] = Durations[i+1][1];
                Durations[i+1][1] = temp;
            }
        } else {
            Time += Durations[i][1]+Durations[i][2];
        }
    }
    
    cout << Time << endl;
    
}

int main(void){
    int totTime;
    
    vector<vector<int>> dur{{7,3,2},{3,6,1}};
    minTime(dur);
    dur = {{3,2,7},{3,6,1}};
    minTime(dur);
    
    return 0;
}
