# 工具的使用

## Linux

如何安装一个Linux系统？

### Vi编辑器

三种模式的使用：

- 命令模式-->(i,a,o,I,A,O)插入模式 插入的**位置**
- 插入模式-->(ESC)命令模式
- 命令模式-->(:)尾行模式
- 尾行模式-->(ESC)命令模式

移动：

hjkl控制光标移动

^行首$尾

yy 复制内容 2yy复制两行

p 粘贴内容

dd 删除内容

翻页：

- ctrl + f；ctrl + b
- ctrl + u；ctrl + d
- G 最后一行
- gg 第一行
- 100G 第100行 :100

查找替换

- /hello向下 ?hello向上 n(next) N(相反)
- /hello\c忽略大小写
- 替换 :n1,n2s/old/new/g 省略n1,n2表示本行

.vimrc

### 命令

- ls 
  - ls -l更详细的信息
  - ls -a隐藏文件
- ln -s hello.txt link.txt(链接文件) 软连接文件不存储目标文件的内容，只是一个快捷方式 删除原文件导致其他文件失效
- 硬链接文件和原文件共享相同的i节点，修改一个文件时，另一个文件也会发生变化 删除原文件不会导致其他文件失效
- 文件权限 所有用户+同组用户+其他用户 rwx 421
- chmod +x a.out chmod -x a.out 
- chmod 777 a.out
- touch hello.txt 如果文件已经存在，那么会修改文件的修改时间
- echo 
- pwd cd
- cp复制文件
- mv
- rm
- mkdir mkdir -p多级
- du
- rmdir