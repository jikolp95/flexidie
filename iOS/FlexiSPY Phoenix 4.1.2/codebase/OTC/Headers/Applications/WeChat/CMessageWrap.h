/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class ImageInfo, NSArray, NSData, NSString, PushMailWrap, QAMessage, ShakePageItem;

@interface CMessageWrap : NSObject
{
    BOOL m_bIsSplit;
    unsigned int m_uiMesLocalID;
    unsigned int m_uiMesSvrID;
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    unsigned int m_uiMessageType;
    NSString *m_nsContent;
    unsigned int m_uiStatus;
    unsigned int m_uiImgStatus;
    unsigned int m_uiDownloadStatus;
    unsigned int m_uiCreateTime;
    NSData *m_dtThumbnail;
    NSData *m_dtImg;
    NSString *m_nsRealChatUsr;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiVoiceFormat;
    unsigned int m_uiVoiceEndFlag;
    unsigned int m_uiVoiceCancelFlag;
    unsigned int m_uiVoiceForwardFlag;
    BOOL m_bNew;
    unsigned int m_matteID;
    NSString *m_nsDisplayName;
    NSString *m_nsImgSrc;
    unsigned int m_uiPercent;
    unsigned int m_uiUploadStatus;
    unsigned int m_uiVideoLen;
    unsigned int m_uiVideoTime;
    unsigned int m_uiVideoOffset;
    unsigned int m_uiCameraType;
    unsigned int m_uiVideoSource;
    NSData *m_dtVoice;
    unsigned int m_uiSendTime;
    unsigned int m_uiWeiboImgFlag;
    unsigned int m_uiEmoticonType;
    NSString *m_nsEmoticonMD5;
    unsigned int m_uiGameType;
    unsigned int m_uiGameContent;
    unsigned int m_uiEmojiStatFlag;
    double m_latitude;
    double m_longitude;
    int m_mapScale;
    NSString *m_locationLabel;
    NSString *m_mapType;
    unsigned int m_uiHDImgSize;
    unsigned int m_uiNormalImgSize;
    BOOL m_bForward;
    unsigned int m_uiApiSDKVersion;
    NSString *m_nsTitle;
    NSString *m_nsDesc;
    NSString *m_nsAppID;
    NSString *m_nsAppName;
    NSString *m_nsAppAction;
    NSString *m_nsAppExtInfo;
    NSString *m_nsAppAttachID;
    unsigned int m_uiAppDataSize;
    unsigned int m_uiAppVersion;
    NSString *m_nsAppFileExt;
    unsigned int m_uiAppType;
    unsigned int m_uiShowType;
    NSString *m_nsAppContent;
    NSString *m_nsAppMediaUrl;
    NSString *m_nsAppMediaLowUrl;
    NSString *m_nsAppMediaDataUrl;
    NSString *m_nsAppMediaLowBandDataUrl;
    NSString *m_nsSourceUsername;
    NSString *m_nsSourceDisplayname;
    NSString *m_nsCommentUrl;
    NSString *m_nsThumbUrl;
    unsigned int m_uiRemindTime;
    unsigned int m_uiRemindId;
    NSString *m_nsRemindAttachId;
    unsigned int m_uiRemindAttachTotalLen;
    unsigned int m_uiRemindFormat;
    unsigned int m_uiOriginFormat;
    unsigned int m_uiOriginMsgSvrId;
    unsigned int m_uiVoipRecvTime;
    unsigned int m_uiVoipStatus;
    unsigned int m_uiVoipInviteType;
    int m_iVoipRoomid;
    long long m_i64VoipKey;
    NSString *m_nsPattern;
    ImageInfo *m_oImageInfo;
    NSString *m_nsPushContent;
    ShakePageItem *m_oShakeResult;
    NSString *m_nsBtnList;
    PushMailWrap *m_oPushMailWrap;
    QAMessage *m_oQAMsg;
    NSArray *m_arrReaderWaps;
    NSArray *m_arrCustomWrap;
    NSString *m_nsMsgSource;
    unsigned int m_uiDes;
    NSString *m_nsImgAesKey;
    NSString *m_nsImgMidUrl;
    NSString *m_nsImgHDUrl;
}

+ (id)FormMessageWrapFromBuffer:(id)arg1;
+ (BOOL)isLongOriginImage:(id)arg1;
+ (BOOL)isSenderFromMsgWrap:(id)arg1;
+ (id)getUserNameFromMsgWrap:(id)arg1;
+ (id)getPathOfMsgHDImg:(id)arg1;
+ (id)getMsgHDImg:(id)arg1;
+ (id)getPathOfMsgImg:(id)arg1;
+ (id)getMsgImg:(id)arg1;
+ (id)getPathOfMsgImgThumb:(id)arg1;
+ (id)getPathOfVideoMsgImgThumb:(id)arg1;
+ (id)getMsgImgThumb:(id)arg1;
+ (id)GetPathOfMesVideoWithMessageWrap:(id)arg1;
+ (id)getMessageListStatusImage:(unsigned long)arg1;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 retStrPath:(id *)arg3;
- (id)init;
- (id)initWithMsgWrap:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)ChangeForVoice;
- (void)ChangeForQQ;
- (void)ChangeForVideo;
- (void)ChangeForChatRoom;
- (void)ChangeForEmoticon;
- (void)ChangeForLocation;
- (void)ChangeForImg;
- (void)ChangeForMassSend;
- (void)ChangeForApp;
- (void)ChangeForPushMail;
- (void)ChangeForVoip;
- (void)ChangeForBrandQA;
- (void)ChangeForReader;
- (void)ChangeForCustom;
- (void)ChangeForDisplay;
- (void)ChangeForBackup;
- (void)UpdateVideoMsgContent;
- (id)GetAppMsgContent;
- (void)UpdateAppMsgContent;
- (id)GetChatName;
- (BOOL)isUploadHDImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withData:(id)arg2;
- (BOOL)IsSxMessage;
- (BOOL)IsQQMessage;
- (BOOL)IsMassSendMessage;
- (BOOL)IsBottleMessage;
- (BOOL)IsUnPlayed;
- (void)SetPlayed;
- (BOOL)IsDownloadEnded;
- (BOOL)IsRecording;
- (BOOL)IsPlaySounded;
- (void)SetPlaySounded:(BOOL)arg1;
- (BOOL)IsImgMsg;
- (BOOL)IsVideoMsg;
- (BOOL)IsSendBySendMsg;
- (id)getSharedContactUsrName;
- (BOOL)IsSameMsg:(id)arg1;
- (id)GetMsgClientMsgID;
- (id)GetImg;
- (id)GetThumb;
- (void)UpdateEmoticonContent;
- (id)GetGameContent;
- (id)GetGameStatReportString;
- (void)UpdateGameInfo:(id)arg1;
- (void)UpdateMassSendContent:(id)arg1;
- (void)UpdateLocationContent;
- (void)UpdateVoiceContent;
- (void)UpdateImgContent;
- (BOOL)IsHDImg;
- (unsigned long)GetPreviewType;
- (void)UpdateQAMessageContent;
- (BOOL)IsBrandQAMessageReplied;
- (void)SetBrandQAMessageAsReplied;
- (void)UpdateVoipExtInfo;
- (BOOL)isShowCommentButton;
- (BOOL)isShowAppBottomButton;
- (BOOL)IsSubUserMsg;
- (BOOL)IsNeedChatExt;
- (id)getNodeBtnList;
@property(retain, nonatomic) NSString *m_nsImgHDUrl; // @synthesize m_nsImgHDUrl;
@property(retain, nonatomic) NSString *m_nsImgMidUrl; // @synthesize m_nsImgMidUrl;
@property(retain, nonatomic) NSString *m_nsImgAesKey; // @synthesize m_nsImgAesKey;
@property(nonatomic) unsigned int m_uiDes; // @synthesize m_uiDes;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSArray *m_arrCustomWrap; // @synthesize m_arrCustomWrap;
@property(retain, nonatomic) NSArray *m_arrReaderWaps; // @synthesize m_arrReaderWaps;
@property(retain, nonatomic) QAMessage *m_oQAMsg; // @synthesize m_oQAMsg;
@property(retain, nonatomic) PushMailWrap *m_oPushMailWrap; // @synthesize m_oPushMailWrap;
@property(retain, nonatomic) NSString *m_nsBtnList; // @synthesize m_nsBtnList;
@property(nonatomic) unsigned int m_uiOriginMsgSvrId; // @synthesize m_uiOriginMsgSvrId;
@property(nonatomic) unsigned int m_uiOriginFormat; // @synthesize m_uiOriginFormat;
@property(nonatomic) unsigned int m_uiRemindFormat; // @synthesize m_uiRemindFormat;
@property(nonatomic) unsigned int m_uiRemindAttachTotalLen; // @synthesize m_uiRemindAttachTotalLen;
@property(retain, nonatomic) NSString *m_nsRemindAttachId; // @synthesize m_nsRemindAttachId;
@property(nonatomic) unsigned int m_uiRemindId; // @synthesize m_uiRemindId;
@property(nonatomic) unsigned int m_uiRemindTime; // @synthesize m_uiRemindTime;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @synthesize m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsCommentUrl; // @synthesize m_nsCommentUrl;
@property(retain, nonatomic) NSString *m_nsSourceDisplayname; // @synthesize m_nsSourceDisplayname;
@property(retain, nonatomic) NSString *m_nsSourceUsername; // @synthesize m_nsSourceUsername;
@property(retain, nonatomic) ShakePageItem *m_oShakeResult; // @synthesize m_oShakeResult;
@property(retain, nonatomic) NSString *m_nsPushContent; // @synthesize m_nsPushContent;
@property(retain, nonatomic) ImageInfo *m_oImageInfo; // @synthesize m_oImageInfo;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(nonatomic) long long m_i64VoipKey; // @synthesize m_i64VoipKey;
@property(nonatomic) int m_iVoipRoomid; // @synthesize m_iVoipRoomid;
@property(nonatomic) unsigned int m_uiVoipInviteType; // @synthesize m_uiVoipInviteType;
@property(nonatomic) unsigned int m_uiVoipStatus; // @synthesize m_uiVoipStatus;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @synthesize m_uiVoipRecvTime;
@property(retain, nonatomic) NSString *m_nsAppMediaLowBandDataUrl; // @synthesize m_nsAppMediaLowBandDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaDataUrl; // @synthesize m_nsAppMediaDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowUrl; // @synthesize m_nsAppMediaLowUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaUrl; // @synthesize m_nsAppMediaUrl;
@property(retain, nonatomic) NSString *m_nsAppContent; // @synthesize m_nsAppContent;
@property(nonatomic) unsigned int m_uiShowType; // @synthesize m_uiShowType;
@property(nonatomic) unsigned int m_uiAppType; // @synthesize m_uiAppType;
@property(retain, nonatomic) NSString *m_nsAppFileExt; // @synthesize m_nsAppFileExt;
@property(nonatomic) unsigned int m_uiAppVersion; // @synthesize m_uiAppVersion;
@property(nonatomic) unsigned int m_uiAppDataSize; // @synthesize m_uiAppDataSize;
@property(retain, nonatomic) NSString *m_nsAppAttachID; // @synthesize m_nsAppAttachID;
@property(retain, nonatomic) NSString *m_nsAppExtInfo; // @synthesize m_nsAppExtInfo;
@property(retain, nonatomic) NSString *m_nsAppAction; // @synthesize m_nsAppAction;
@property(retain, nonatomic) NSString *m_nsAppName; // @synthesize m_nsAppName;
@property(retain, nonatomic) NSString *m_nsAppID; // @synthesize m_nsAppID;
@property(retain, nonatomic) NSString *m_nsDesc; // @synthesize m_nsDesc;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) unsigned int m_uiApiSDKVersion; // @synthesize m_uiApiSDKVersion;
@property(nonatomic) BOOL m_bForward; // @synthesize m_bForward;
@property(nonatomic) unsigned int m_uiNormalImgSize; // @synthesize m_uiNormalImgSize;
@property(nonatomic) unsigned int m_uiHDImgSize; // @synthesize m_uiHDImgSize;
@property(retain, nonatomic) NSString *m_mapType; // @synthesize m_mapType;
@property(retain, nonatomic) NSString *m_locationLabel; // @synthesize m_locationLabel;
@property(nonatomic) int m_mapScale; // @synthesize m_mapScale;
@property(nonatomic) double m_longitude; // @synthesize m_longitude;
@property(nonatomic) double m_latitude; // @synthesize m_latitude;
@property(nonatomic) unsigned int m_uiEmojiStatFlag; // @synthesize m_uiEmojiStatFlag;
@property(nonatomic) unsigned int m_uiGameContent; // @synthesize m_uiGameContent;
@property(nonatomic) unsigned int m_uiGameType; // @synthesize m_uiGameType;
@property(retain, nonatomic) NSString *m_nsEmoticonMD5; // @synthesize m_nsEmoticonMD5;
@property(nonatomic) unsigned int m_uiEmoticonType; // @synthesize m_uiEmoticonType;
@property(nonatomic) unsigned int m_uiWeiboImgFlag; // @synthesize m_uiWeiboImgFlag;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned int m_uiCameraType; // @synthesize m_uiCameraType;
@property(nonatomic) unsigned int m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned int m_uiVideoTime; // @synthesize m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVideoLen; // @synthesize m_uiVideoLen;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiPercent; // @synthesize m_uiPercent;
@property(retain, nonatomic) NSString *m_nsImgSrc; // @synthesize m_nsImgSrc;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(nonatomic) unsigned int m_matteID; // @synthesize m_matteID;
@property(nonatomic) BOOL m_bNew; // @synthesize m_bNew;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @synthesize m_uiVoiceForwardFlag;
@property(nonatomic) unsigned int m_uiVoiceCancelFlag; // @synthesize m_uiVoiceCancelFlag;
@property(nonatomic) unsigned int m_uiVoiceEndFlag; // @synthesize m_uiVoiceEndFlag;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @synthesize m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(nonatomic) BOOL m_bIsSplit; // @synthesize m_bIsSplit;
@property(retain, nonatomic) NSData *m_dtImg; // @synthesize m_dtImg;
@property(retain, nonatomic) NSData *m_dtThumbnail; // @synthesize m_dtThumbnail;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiDownloadStatus; // @synthesize m_uiDownloadStatus;
@property(nonatomic) unsigned int m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(nonatomic) unsigned int m_uiMesSvrID; // @synthesize m_uiMesSvrID;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID;
- (int)compareMessageLocalIDDescending:(id)arg1;
- (int)compareMessageAscending:(id)arg1;
- (int)compareSXAscending:(id)arg1;
- (int)compareQQAscending:(id)arg1;

@end

