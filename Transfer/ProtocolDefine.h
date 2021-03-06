#pragma once

/*
 *	协议相关的定义
 */
#ifndef ProtocolDefine_h__
#define ProtocolDefine_h__

#define MAX_PLAYER_NUM		2000			// 一个服务器支持的玩家数(=最大连接数)

#define MAX_PACK_LEN		8192			// 协议包最大长度

#define GAME_NET_PORT		9527			// 游戏端口号

// 服务器类型
#define TYPE_CLIENT					1
#define TYPE_GAME_SERVER			2
#include "sdu/sdtype.h"
#include <stdint.h>

const int NETPACK_DELAY_MIN			= 0;
const int NETPACK_DELAY_MAX			= 0;		// Fake传输层,模拟延时

//typedef struct STNetMsgHeader
//{
//	uint32	dwMsgID;			// 包头标示
//	uint32	dwDataLen;		// 数据包长度(不包括包头)
//} STNetMsgHeader;

struct STPipeMsgHeader
{
	uint16	wMsgID;		//Process function ID
	uint32	dwTransID;	//Message target ID
};

enum LogStatus
{
  LOGOUT = UINT32_MAX,
	LOGIN = 0
};

#include "bnfgameproto.h"		// protocol define for game
extern CBnFGameProto g_BnFGameProto;
extern CBnFGameProto g_BnFGameProtoDe;
extern CBnFGameProto g_BnFGameProtoEN;

#endif // ProtocolDefine_h__
