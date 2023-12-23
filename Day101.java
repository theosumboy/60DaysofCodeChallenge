class Solution {
    public boolean isPathCrossing(String path) {
        Set<String> points = new HashSet<>();
        points.add("0,0");
        int x = 0, y = 0;

        for (char d : path.toCharArray()) {
            if (d == 'N') y++;
            else if (d == 'S') y--;
            else if (d == 'E') x++;
            else if (d == 'W') x--;

            if (points.contains(x + "," + y)) return true;
            points.add(x + "," + y);
        }

        return false;        
    }
}
