import cv2
import os

def split_video_to_frames(video_path, output_folder):
    
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)

    
    cap = cv2.VideoCapture(video_path)
    frame_count = 0

    
    while cap.isOpened():
        ret, frame = cap.read()
        if not ret:
            break

        # Save frame as image
        frame_filename = os.path.join(output_folder, f"frame_{frame_count}.jpg")
        cv2.imwrite(frame_filename, frame)

        frame_count += 1

    # Release the video capture object and close all windows
    cap.release()
    cv2.destroyAllWindows()


video_path = 'your_video.mp4'#any format is fine

output_folder = 'output_frames'

split_video_to_frames(video_path, output_folder)
