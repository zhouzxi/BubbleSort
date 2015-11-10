/**********************************************************************
* 版权所有 (C)2015, Zhou Zhaoxiong。
*
* 文件名称：main.c
* 文件标识：无
* 内容摘要：冒泡排序演示程序
* 其它说明：无
* 当前版本：V1.0
* 作    者：Zhou Zhaoxiong
* 完成日期：20151009
*
**********************************************************************/
#include "BubbleSort.h"


/**********************************************************************
* 功能描述：主函数
* 输入参数：无
* 输出参数：无
* 返 回 值：无
* 其它说明：无
* 修改日期        版本号     修改人            修改内容
* -------------------------------------------------------------------
* 20151009        V1.0     Zhou Zhaoxiong        创建
***********************************************************************/
INT32 main()
{
    UINT32 iLoopFlag   = 0;
    INT32  szArray[10] = {0};
 	
    printf("请输入10个整数: \n");
    
    // 读入需要排序的10个整数
    for (iLoopFlag = 0; iLoopFlag < 10; iLoopFlag ++)
    {
        scanf("%d", &szArray[iLoopFlag]); 
    }

    // 对输入的整数进行冒泡排序
    BubbleSort(szArray, 10);
	
    // 打印排序之后的结果
    printf("排序之后的结果为: \n");
    for (iLoopFlag = 0; iLoopFlag < 10; iLoopFlag ++) 
    {
        printf("%-5d", szArray[iLoopFlag]); 
    }

    printf("\n"); 

    return 0;
}
