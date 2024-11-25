int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    int trustMe[n + 1], trustOthers[n + 1];     
    int ans = -1;
    for(int i = 0; i < n + 1; i++){ 
        trustMe[i] = 0;
        trustOthers[i] = 0;
    }

    for(int i = 0; i < trustSize; i++){ 
        trustMe[trust[i][1]]++;     
        trustOthers[trust[i][0]]++; 
    }

    for(int i = 1; i < n + 1; i++){
        if(trustMe[i] == n - 1 && trustOthers[i] == 0)  
            ans = i;
    }
    return ans;
}
