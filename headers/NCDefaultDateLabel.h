
@interface NCDefaultDateLabel : UILabel 
// <NCNotificationDateLabel> {
//     BOOL _allDay;
//     <SBDateLabelDelegate> *_delegate;
//     BOOL _effectiveAllDay;
//     NSDate *_effectiveAllDayEndDate;
//     NSDate *_effectiveAllDayLastValidDate;
//     NSDate *_effectiveAllDayStartDate;
//     BOOL _isCoalescingUpdates;
//     BOOL _isTimestamp;
//     int _labelType;
//     BOOL _needsUpdateFromCoalesce;
//     NSDate *_timeZoneRelativeEndDate;
//     NSDate *_timeZoneRelativeStartDate;
//     NSTimer *_updateTimer;
// }

// @property (getter=isAllDay, nonatomic) BOOL allDay;
// @property (readonly, copy) NSString *debugDescription;
// @property (nonatomic) <SBDateLabelDelegate> *delegate;
// @property (readonly, copy) NSString *description;
// @property (readonly) unsigned int hash;
// @property (nonatomic) BOOL isTimestamp;
// @property (nonatomic) int labelType;
// @property (readonly) Class superclass;

// + (id)_currentCalendar;

// - (void)_configureTimer;
// - (id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(BOOL)arg3 sameDayDates:(BOOL)arg4 eventOngoing:(BOOL)arg5 withCurrentDate:(id)arg6 forStartLabel:(BOOL)arg7;
// - (void)_forceUpdate;
// - (void)_invalidateTimer;
// - (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
// - (void)_resetEffectiveAllDayState:(BOOL)arg1;
// - (void)_updateEffectiveAllDayTimes;
// - (void)_updateTimerFired:(id)arg1;
// - (id)constructLabelString;
// - (void)dealloc;
// - (id)delegate;
// - (id)init;
// - (BOOL)isAllDay;
// - (BOOL)isDateWithinEffectiveAllDayRange:(id)arg1;
// - (BOOL)isEffectiveAllDay;
// - (BOOL)isTimestamp;
// - (int)labelType;
// - (void)prepareForReuse;
// - (void)setAllDay:(BOOL)arg1;
// - (void)setDelegate:(id)arg1;
// - (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
// - (void)setIsTimestamp:(BOOL)arg1;
// - (void)setLabelType:(int)arg1;
// - (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
// - (void)setTimeZoneRelativeEndDate:(id)arg1;
// - (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
// - (void)startCoalescingUpdates;
// - (void)stopCoalescingUpdates;
- (void)update;
// - (void)updateTextIfNecessary;
// - (void)updateTextIfNecessary:(BOOL)arg1;

@end