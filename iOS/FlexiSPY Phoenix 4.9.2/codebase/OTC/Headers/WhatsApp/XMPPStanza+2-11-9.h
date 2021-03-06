/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XMPPStanzaElement.h"

@class NSDate, NSError, NSString;
/*
@interface XMPPStanza : XMPPStanzaElement
{
}*/
@interface XMPPStanza (WhatsApp_2_11_9)
+ (id)generateSID;
+ (id)generateUniqueIdentifier;
@property(readonly, nonatomic) int offlineCount;
@property(readonly, nonatomic) BOOL offline;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *errorCode;
@property(readonly, nonatomic) NSDate *timestamp;
@property(retain, nonatomic) NSString *participant;
@property(retain, nonatomic) NSString *fromJID;
@property(retain, nonatomic) NSString *toJID;
@property(retain, nonatomic) NSString *uniqueIdentifier;
- (id)initWithName:(id)arg1 fromJID:(id)arg2 toJID:(id)arg3;
- (id)initWithStanzaElement:(id)arg1;

@end

