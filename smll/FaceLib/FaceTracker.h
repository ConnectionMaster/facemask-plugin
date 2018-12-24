/*
* Face Masks for SlOBS
* smll - streamlabs machine learning library
*
* Copyright (C) 2017 General Workings Inc
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/
#pragma once
#include <vector>
#include <opencv2/opencv.hpp>
#include <dlib/image_processing.h>
#include <dlib/opencv.h>

namespace FaceLib {

	/*
	FaceTracker class to detect and track multiple faces
	*/

	class FaceTracker {
	public:
		FaceTracker();
		~FaceTracker();
		void TrackFaces(cv::Mat& image, std::vector<dlib::rectangle>& faces);

	private:
		int _maxFaces;
		int _detectionFrequency;
		std::vector<dlib::rectangle> _faces;
		std::vector<dlib::correlation_tracker> _tracker;

	};
}