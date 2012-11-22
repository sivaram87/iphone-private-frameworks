/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "VSSpeechSynthesizerDelegate.h"
#import "VSRecognitionSessionDelegate.h"
#import "SBSlidingAlertDisplay.h"

@class UITextField, NSMutableSet, NSTimer, NSDictionary, NSString, NSMutableArray, UIKeyboard, VSRecognitionSession, AVController, VSSpeechSynthesizer, NSInvocation, NSMutableIndexSet;

@interface SBVoiceControlAlertDisplay : SBSlidingAlertDisplay <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate> {
	VSRecognitionSession* _session;
	VSSpeechSynthesizer* _synthesizer;
	BOOL _wasRecognizing;
	BOOL _didConfigureRouting;
	NSInvocation* _postSoundInvocation;
	UIView* _leftFadeView;
	UIView* _rightFadeView;
	UIView* _labelsView;
	int _clipCount;
	int _currentClipNo;
	BOOL _voiceTranscription;
	UITextField* _textField;
	UIKeyboard* _keyboard;
	NSMutableArray* _transcripts;
	NSMutableArray* _voiceClips;
	AVController* _avController;
	NSMutableArray* _waves;
	NSMutableSet* _labels;
	int _keywordCount;
	int _lastKeywordIndex;
	NSTimer* _levelTimer;
	NSMutableIndexSet* _occupiedLabelSlots;
	NSDictionary* _locStrings;
	NSString* _languageID;
	BOOL _labelsOn;
	BOOL _animatingToCall;
	BOOL _didDismiss;
	BOOL _awaitingButtonRelease;
	BOOL _isBecomingVisible;
	BOOL _ignoreNextSpeechStop;
	BOOL _labelsHaveDisplayed;
}
+(id)createBottomLockBarForDisplay:(id)display;
-(id)initWithFrame:(CGRect)frame session:(id)session;
-(BOOL)_wasTriggeredByMenu;
-(id)_localizedStringForKey:(id)key;
-(void)setTitleText:(id)text;
-(void)setStatusText:(id)text;
-(void)alertWillBeDismissed;
-(void)lockBarUnlocked:(id)unlocked;
-(void)_invalidateRouting;
-(void)_notifyDeviceTermination;
-(void)_dismissIfWeHavent;
-(void)_dismissSlightlyLater;
-(void)handleButtonUpCancel;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
-(id)_desiredRouteDictionary;
-(void)_pickedRouteChanged:(id)changed;
-(void)_configureRoutingIfNecessary;
-(void)_performSoundCompletionAction;
-(BOOL)_attemptPlaySound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(void)_playSound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(void)_startSession;
-(void)_resetSession;
-(void)_continueRecognitionAction;
-(void)_performNoMatchFound;
-(void)_promptUserForVoiceTranscription;
-(void)_mediaPlayerDied;
-(void)_userEnteredTextForVoiceClip:(id)voiceClip;
-(void)_startTrancribeAudio;
-(void)_getAudioClipsFromDirectory;
-(void)_playAudioAtPath:(id)path;
-(void)_exitVoiceTranscriptView;
-(void)_finishedFadingToAwayInCallController;
-(void)_animateToAwayInCallController;
-(id)_openTelURL:(id)url;
-(void)_continueWithRecognitionAction;
-(void)_performConfirmationAction;
-(void)_speakText:(id)text;
-(void)_stopSpeech;
-(void)_updateLevels;
-(void)_startUpdatingLevels;
-(void)_stopUpdatingLevels;
-(void)_setWaveAlpha:(float)alpha withDuration:(double)duration;
-(int)_keywordCount;
-(void)_startLabelForKeywordAtIndex:(int)index now:(BOOL)now delayStart:(BOOL)start;
-(void)_startKeywordIfNecessary;
-(void)_labelFinishedAnimating:(id)animating finished:(id)finished label:(id)label;
-(void)_startMovingLabels;
-(void)_fadeOutCurrentLabels;
-(void)_stopMovingLabels;
-(void)_labelsFadedOut:(id)anOut finished:(id)finished labels:(id)labels;
-(void)_keywordsChanged:(id)changed;
@end

