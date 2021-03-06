#ifndef _KOZOS_H_INCLUDED_
#define _KOZOS_H_INCLUDED_

#include "defines.h"
#include "syscall.h"


/*システムコール*/
/*スレッドの起動のシステムコール*/
kz_thread_id_t kz_run(kz_func_t func,char *name,int stacksize,int argc,char *argv[]);

/*スレッドの終了のシステムコール*/
void kz_exit(void);

/*ライブラリ関数*/

/*初期スレッドを起動し、OSの動作を開始*/
void kz_start(kz_func_t func,char *name,int stacksize,int argc,char *argv[]);

/*エラー表示*/
void kz_sysdown(void);

/*システムコールを実行*/
void kz_syscall(kz_syscall_type_t type,kz_syscall_param_t *param);

/*ユーザースレッド*/
int test08_1_main(int argc,char *argv[]);

#endif
