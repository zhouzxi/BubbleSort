/**********************************************************************
* 版权所有 (C)2015, Zhou Zhaoxiong。
*
* 文件名称：BubbleSort.c
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
 * 功能描述： 冒泡排序
 * 输入参数： pszArray-数组元素
              iArrayLen-数组长度
 * 输出参数： 无
 * 返 回 值： 无
 * 其它说明： 无
 * 修改日期            版本号            修改人           修改内容
 * ----------------------------------------------------------------------
 * 20151009            V1.0          Zhou Zhaoxiong        创建
 ************************************************************************/
void BubbleSort(INT32 *pszArray, UINT32 iArrayLen)
{
    UINT32 iInnerLoop  = 0;
	UINT32 iOutterLoop = 0;
	INT32  iTmpVal     = 0;
	
	if (pszArray == NULL)
	{
	    printf("BubbleSort: pszArray is NULL!\n");
		return;
	}
	
	for (iOutterLoop = 0; iOutterLoop < iArrayLen; iOutterLoop ++)
	{
	    for (iInnerLoop = 0; iInnerLoop < iArrayLen-iOutterLoop-1; iInnerLoop ++)
		{
		    if (pszArray[iInnerLoop] > pszArray[iInnerLoop+1])
			{
			    iTmpVal                = pszArray[iInnerLoop];
				pszArray[iInnerLoop]   = pszArray[iInnerLoop+1];
				pszArray[iInnerLoop+1] = iTmpVal;
			}
		}
	}
	
	return;
}
