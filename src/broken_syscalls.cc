extern "C" {
int symlink(void*, void*) {
    return -1;
}
int ftruncate(void*, void*) {
    return -1;
}
int truncate(void*, void*) {

}
int popen(void*, void*) {
    return -1;
}
int pclose(void*) {
    return -1;
}
int access(void*, void*) {
    return -1;
}
};