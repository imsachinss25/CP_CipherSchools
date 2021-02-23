int solve(vector<int>& A, vector<int>& B){

	int start=0, curr_p=0, pre_p=0;

	for(int i=0;i<A.size();i++){

	curr_p+=(A[i]-B[i]);

	if(curr_p<0){

	start=i+1;

	pre_p+=curr_p;

	}

	}

	return ((curr_p+pre_p)>=0)?(start+1):-1;

}
