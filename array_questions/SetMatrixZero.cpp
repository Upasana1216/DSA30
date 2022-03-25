class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int fr=0,fc=0;
        for(int i=0;i<a.size();i++){
            
            for(int j=0;j<a[i].size();j++){
                
                if(a[i][j]==0){
                    
                    if(i==0)
                        fr=1;
                    
                    if(j==0)
                        fc=1;
                    
                    a[0][j]=0;
                    a[i][0]=0;
                }
            }
        }
        
        for(int i=a.size()-1;i>=1;i--){
            for(int j=a[i].size()-1;j>=1;j--){
                
                if(a[0][j]==0 || a[i][0]==0)
                    a[i][j]=0;
            }
            
        }
        
        if(fc){
            for(int i = 0; i < a.size(); i++) 
                a[i][0] = 0;
        }
        if(fr){
            for(int j = 0; j < a[0].size(); j++) 
                a[0][j] = 0;
        }
        
    }
};