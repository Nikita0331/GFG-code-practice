swap(s[ind],s[i]);

             permute(ans,s,ind+1);

             swap(s[ind],s[i]);

         }

         

     }

     

 vector<string>find_permutation(string S)

 {

     vector<string> ans;

     permute(ans,S,0);

     sort(ans.begin(),ans.end());

     return ans;

 }