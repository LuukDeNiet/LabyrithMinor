﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t388;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t389;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t390;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t391;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t392;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t393;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t394;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t395;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t396;

#include "mscorlib_System_Object.h"

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t387  : public Object_t
{
};
struct GameCenterPlatform_t387_StaticFields{
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_1_t388 * ___s_AuthenticateCallback_0;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_FriendsCallback
	Action_1_t388 * ___s_FriendsCallback_1;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementDescriptionLoaderCallback
	Action_1_t389 * ___s_AchievementDescriptionLoaderCallback_2;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementLoaderCallback
	Action_1_t390 * ___s_AchievementLoaderCallback_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ProgressCallback
	Action_1_t388 * ___s_ProgressCallback_4;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreCallback
	Action_1_t388 * ___s_ScoreCallback_5;
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreLoaderCallback
	Action_1_t391 * ___s_ScoreLoaderCallback_6;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_LeaderboardCallback
	Action_1_t388 * ___s_LeaderboardCallback_7;
	// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_UsersCallback
	Action_1_t392 * ___s_UsersCallback_8;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t393* ___s_adCache_9;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t394* ___s_friends_10;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t394* ___s_users_11;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t388 * ___s_ResetAchievements_12;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t395 * ___m_LocalUser_13;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t396 * ___m_GcBoards_14;
};
