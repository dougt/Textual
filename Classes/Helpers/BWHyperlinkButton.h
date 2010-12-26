//
//  BWHyperlinkButton.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

@interface BWHyperlinkButton : NSButton 
{
	NSString *urlString;
}

@property (copy, nonatomic) NSString *urlString;

@end