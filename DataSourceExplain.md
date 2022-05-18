# book表

~~~sql
id  			int		  主键	书的id值	
author			varchar			  作者
isbn			varchar			  isbn值
name			varchar			  书名
pages			int				  总页数
price			double			  价格
publish			varchar			  出版社
publist_time	datetime		  出版时间
size			int				 库存
type			varchar			  类型
translate		varchar			  翻译
~~~

# borrow表

~~~
id				int		主键	书单id
bood_id			int			书的id    foreign key (book.id)
cretae_time		datetime	 借书时间
update_time		datetime	 实际归还时间
user_id			int			用户id	foreign key(users.id)
end_time		datetime	还书时间
ret				int			是否归还（0已归还，1未归还）
~~~

# users表

~~~
id				int		主键		用户id
address			varchar			 用户地址
avatar			varchar			 头像
birthday		datetime		 生日
email			varchar			邮箱
identity		int				身份   0 学生 1 教师  2 校外人士  3 管理员
is_admin		int				是否为管理员
mickname		varchar			昵称
password		varchar			密码
size			int				可借图书数量
tel				varchar			电话
username		varchar			用户名
~~~



