#ifndef SPRINGBOARDSERVICES_H
#define SPRINGBOARDSERVICES_H

#if __cplusplus
extern "C" {
#endif
#include <CoreFoundation/CoreFoundation.h>
#include <Availability.h>

	mach_port_t SBSSpringBoardServerPort();
	
#pragma mark -
#pragma mark Application launching
	/// Launch an application given the display ID.
	/// Equivalent to -[UIApplication launchApplicationWithIdentifier:suspended:].
	/// @return 0 on success, nonzero on failure. Feed the result to SBSApplicationLaunchingErrorString() to get the error string.
	int SBSLaunchApplicationWithIdentifier(CFStringRef displayIdentifier, Boolean suspended) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	
	/// Launch an application for debugging.
	/// The parameters are not known yet...
	int SBSLaunchApplicationForDebugging(void* unknown, ...) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	
	/// Get the error string from error code returned by SBSLaunchApplicationWithIdentifier().
	CFStringRef SBSApplicationLaunchingErrorString(int error);
	
#pragma mark -
#pragma mark Watchdog assertion
	
	typedef struct __SBSWatchdogAssertion* SBSWatchdogAssertionRef;
	
	CFTypeID SBSWatchdogAssertionGetTypeID();
	void SBSWatchdogAssertionCancel(SBSWatchdogAssertionRef assertion);
	SBSWatchdogAssertionRef SBSWatchdogAssertionCreateForPID(CFAllocatorRef allocator, pid_t pid);
	int SBSWatchdogAssertionRenew(SBSWatchdogAssertionRef assertion);
	CFTimeInterval SBSWatchdogAssertionGetRenewalInterval(SBSWatchdogAssertionRef assertion);
	
#pragma mark -
	
	CFArrayRef SBSCopyApplicationDisplayIdentifiers(Boolean onlyActive, Boolean unknown);
	
	CFStringRef SBSCopyIconImagePathForDisplayIdentifier(CFStringRef dispIden);
	CFStringRef SBSCopyLocalizedApplicationNameForDisplayIdentifier(CFStringRef dispIden);
	
#pragma mark -
#pragma mark SB functions - Media
	void SBSetMediaVolume(mach_port_t port, int volume) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	
	void SBSetDisableNowPlayingHUD(mach_port_t port, Boolean disable) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	void SBSetNowPlayingInformation(mach_port_t port, void* info);
	
#pragma mark -
#pragma mark SB functions - Accessibility
	void SBSetZoomTouchEnabled(mach_port_t port, Boolean enable) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	void SBSetDisplayColorsInverted(mach_port_t port, Boolean inverted) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	
#pragma mark -
#pragma mark SB functions - Remote
	void SBApplicationSetSimpleRemoteRoutingPriority(mach_port_t port, int priority) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	
#pragma mark -
#pragma mark SB functions - Watchdog
	
	void SBCancelWatchdogAssertionForProcess(mach_port_t port, pid_t pid, void* unknown);
	
	void SBReloadApplication(mach_port_t port) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
	
	
#endif
	
#if __cplusplus
}
#endif

#endif