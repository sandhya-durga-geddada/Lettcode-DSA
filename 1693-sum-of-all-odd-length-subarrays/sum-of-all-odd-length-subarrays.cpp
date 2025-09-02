class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> prefSum(arr.size());
        prefSum[0] = arr[0];
        for(int i=1;i<arr.size();i++){
            prefSum[i]=prefSum[i-1] + arr[i];
        }

        int sum = 0;
        sum += accumulate(arr.begin(),arr.end(),0);

        int i = 2;
        while(i<prefSum.size()){
            int j=0;
            int p=i+1;
            sum+=prefSum[p-1];
            while(p<prefSum.size()){
                sum+= (prefSum[p] - prefSum[j]);
                // cout<<prefSum[p] - prefSum[j]<<" ";
                // cout<<p-j<<" ";
                j++;
                p++;
            }
            i+=2;
        }
        return sum;
    }
};