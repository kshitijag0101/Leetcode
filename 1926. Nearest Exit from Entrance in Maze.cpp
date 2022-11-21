class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int y=maze.size(),yend=maze.size()-1,x=maze[0].size(),xend= maze[0].size()-1;
        int res=0;
        queue<tuple<int,int,int>> q;
        q.push({entrance[0], entrance[1], 0});
        while(!q.empty()){
            auto [cy,cx, w] = q.front(); q.pop();
            if(maze[cy][cx] == '+') continue;
            maze[cy][cx] = '+';
            if(cy == 0 || cy == yend || cx == 0 || cx == xend ){
                if(cy == entrance[0] && cx == entrance[1]);
                else return w;
            }
            w++;
            if(cy && maze[cy-1][cx] == '.') q.push({cy-1,cx,w});
            if(cy != yend && maze[cy+1][cx] == '.') q.push({cy+1,cx,w});
            if(cx && maze[cy][cx-1] == '.') q.push({cy,cx-1,w});
            if(cx != xend && maze[cy][cx+1] == '.') q.push({cy,cx+1,w});
        }
        return -1;      
    }
};