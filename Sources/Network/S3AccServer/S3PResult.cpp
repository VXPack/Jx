/**************************************************/
/*                                                */
/*  文件名:    S3PResult                          */
/*  描述    :  用于保存执行sql语句后的数据        */
/*                                                */
/*	作者	 : Liu Wansong                        */
/*	创建日期 : 8/26/2002                          */
/*  修改日期 : 8/26/2002                          */
/**************************************************/

#include "S3PResult.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
#ifdef def_MYSQL_DB
S3P_mySQL_Result::~S3P_mySQL_Result()
{

}
#endif
