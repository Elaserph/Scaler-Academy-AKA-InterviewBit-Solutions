/*Problem Description

Print a Pattern According to The Given Value of A.

Example: For A = 3 pattern looks like:

1 0 0

1 2 0

1 2 3*/

//C++
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> B(A);
    int itr=0;
    for(int i=0;i<A;i++){
        for(int j=0;j<itr+1;j++){
            B[i].push_back(j+1);
        }
        itr++;
    }
    return B;
}
