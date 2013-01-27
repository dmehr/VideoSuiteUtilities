//
//  VideoBankPlayer.h
//  SH
//
//  Created by Jonas Jongejan on 07/01/13.
//  Copyright (c) 2013 HalfdanJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VideoBank.h"

#import "MIDIReceiver.h"
extern MIDIReceiver * globalMidi;

@interface VideoBankPlayer : NSObject
{
    BOOL _playing;
    
    AVQueuePlayer * avPlayer[2];
    AVPlayerLayer * avPlayerLayer[3][2];
    
    id timeObserverToken[2];
    id timeOutTimeObserverToken[2];
    id fadeInObserverToken[2];
    id fadeOutObserverToken[2];
    id fadeOutEventObserverToken[2];
    
    bool playOnOutput[3];
//    VideoBankItem * uiUpdateBankItem[2];

}



@property VideoBank * videoBank;

@property int bankSelection;
@property int numberOfBanksToPlay;
@property BOOL playing;
@property float opacity;
@property BOOL loop;
@property float playbackRate;
@property BOOL playOnOutput1;
@property BOOL playOnOutput2;
@property BOOL playOnOutput3;


@property CALayer * layer1;
@property CALayer * layer2;
@property CALayer * layer3;

@property NSString * currentTimeString;
@property (weak) NSSegmentedControl * segmentControl;

-(id)initWithBank:(VideoBank*)bank;
-(void) qlabPlay;
-(void) qlabStop;


@end
