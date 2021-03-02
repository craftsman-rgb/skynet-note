#ifndef skynet_daemon_h
#define skynet_daemon_h
后台进程初始化
int daemon_init(const char *pidfile);
后台进程退出
int daemon_exit(const char *pidfile);

#endif
