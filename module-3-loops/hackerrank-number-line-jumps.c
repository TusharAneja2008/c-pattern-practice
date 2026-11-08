char* kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        return (x1 == x2) ? "YES" : "NO";
    }
    int distance = x2 - x1;
    int speed = v1 - v2;
    if (distance % speed == 0 && distance / speed >= 0) {
        return "YES";
    }
    return "NO";
}
