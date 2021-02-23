struct Interval
{
	int s,e;
	
};

bool mycmp(Interval a, Interval b){
	return (a.s<=b.s);
} 
vector<Interval>merge(vector<Interval>& A){
	sort(A.begin(), A.end(), mycmp);
	vector<Interval>ans;
	int i;
	for(i=0;i<A.size()-1;i++){
		if(A[i].e>=A[i+1].s){
			A[i+1].s=A[i].s;
			A[i+1].e=max(A[i].e, A[i+1].e);
		}
		else{
			ans.push_back(A[i]);
		}
	}
	ans.push_back(A[i]);
	return ans;
}
