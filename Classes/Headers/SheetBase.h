// Created by Satoshi Nakagawa <psychs AT limechat DOT net> <http://github.com/psychs/limechat>
// You can redistribute it and/or modify it under the new BSD license.

@interface SheetBase : NSObject
{
	id __unsafe_unretained delegate;
	
	NSWindow *__weak window;

	IBOutlet NSWindow *sheet;
	IBOutlet NSButton *okButton;
	IBOutlet NSButton *cancelButton;
}

@property (nonatomic, unsafe_unretained) id delegate;
@property (nonatomic, weak) NSWindow *window;
@property (nonatomic, strong) NSWindow *sheet;
@property (nonatomic, strong) NSButton *okButton;
@property (nonatomic, strong) NSButton *cancelButton;

- (void)startSheet;
- (void)startSheetWithWindow:(NSWindow *)awindow;

- (void)endSheet;

- (void)ok:(id)sender;
- (void)cancel:(id)sender;
@end