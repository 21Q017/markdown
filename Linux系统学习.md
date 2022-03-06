# Linux系统学习

## linux的启动过程

- 内核的引导

- 运行init

- 系统初始化

- 建立终端，通过Ctrl+Alt+Fn来切换（每个窗口都可以进行独立的操作）

- 用户登录系统

### 用户登录系统的相关指now令

  ```shell
  sync 		将数据由内存同步到硬盘中
  shutdown 	关机指令，man shutdown是帮助文档
  shutdown -h 10 "10 minute after shutdown"  10分钟后关机
  shutdown -h now 	现在关机
  shutdown –h 20:25 	系统会在今天20:25关机
  shutdown –r now 	系统立马重启
  shutdown –r +10 	系统十分钟后重启
  reboot 		就是重启，等同于 shutdown –r now
  halt 		关闭系统，等同于shutdown –h now 和 poweroff
  
  
  ```

  ## Linux系统目录结构

```shell
ls / 		查看目录
```

![树状目录结构](https://www.runoob.com/wp-content/uploads/2014/06/d0c50-linux2bfile2bsystem2bhierarchy.jpg)

- /bin

  

