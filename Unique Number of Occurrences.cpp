class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> sol;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int i = 0;
        while(i<n){
            int count = 1;
            for(int j = i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else{
                    break;
                }
            }
            sol.push_back(count);
            i=i+count; 
        }
        n = sol.size();
        sort(sol.begin(),sol.end());
        for(int i = 0; i < n-1; i++)
        {
            if(sol[i]==sol[i+1])
            {
                return false;
            }
        }
        return true;
    }
};





Optimized solution

/*

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int a[1000] = {0};
        for(int i = 0; i < arr.size(); i++){
            int count = 0;
            if(arr[i] == 1001)  
                continue;
            
            for(int j = i+1; j < arr.size(); j++){
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = 1001;
                }
            }
            if(a[count])  return false;
            else  a[count] = 1;
        }
        return true;
    }
};

*/