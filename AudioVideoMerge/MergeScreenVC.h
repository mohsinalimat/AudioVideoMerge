//
//  MergeScreenVC.h
//  AudioVideoMerge
//
//  Created by Ravi on 06/06/17.
//  Copyright © 2017 Ravi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

@interface MergeScreenVC : UIViewController
{
    MPMoviePlayerController *moviePlayer;
}

- (IBAction)btnMergeTapped:(id)sender;

- (void)exportDidFinish:(AVAssetExportSession*)session;

@property(nonatomic,retain)AVURLAsset* videoAsset;
@property(nonatomic,retain)AVURLAsset* audioAsset;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityView;
@property (weak, nonatomic) IBOutlet UIView *vwMoviePlayer;

@property (weak, nonatomic) NSString *strName;


@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentControl;
- (IBAction)segmentControl:(id)sender;


@end
