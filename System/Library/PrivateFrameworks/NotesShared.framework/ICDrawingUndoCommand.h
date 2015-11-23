/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, ICDrawingUndoCheckPoint;

@interface ICDrawingUndoCommand : NSObject {

	BOOL _hide;
	NSArray* _commands;
	NSString* _actionName;
	ICDrawingUndoCheckPoint* _checkPoint;

}

@property (nonatomic,retain) NSArray * commands;                                //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * actionName;                             //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,readonly) NSArray * visibleCommands; 
@property (assign,nonatomic) BOOL hide;                                         //@synthesize hide=_hide - In the implementation block
@property (nonatomic,retain) ICDrawingUndoCheckPoint * checkPoint;              //@synthesize checkPoint=_checkPoint - In the implementation block
-(BOOL)hide;
-(void)setActionName:(NSString *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(NSArray *)visibleCommands;
-(double)renderCost;
-(void)setHide:(BOOL)arg1 ;
-(ICDrawingUndoCheckPoint *)checkPoint;
-(void)setCheckPoint:(ICDrawingUndoCheckPoint *)arg1 ;
-(NSString *)actionName;
@end
