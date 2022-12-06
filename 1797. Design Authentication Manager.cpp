class AuthenticationManager {
public:
    unordered_map<string,int> expiryTime;
    int extratime;
    AuthenticationManager(int timeToLive) {
        extratime=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        expiryTime[tokenId] = currentTime + extratime;
    }
    
    void renew(string tokenId, int currentTime) {
        if(expiryTime.find(tokenId)!=expiryTime.end()) {   
            if(currentTime < expiryTime[tokenId])            
                expiryTime[tokenId] = currentTime + extratime;  
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int cnt=0;
        for(auto token:expiryTime) {
            if(currentTime < token.second)
                cnt++;
        }
        return cnt;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */