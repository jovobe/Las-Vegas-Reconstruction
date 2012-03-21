/*
 * KinectIO.h
 *
 *  Created on: 20.03.2012
 *      Author: twiemann
 */

#ifndef KINECTIO_H_
#define KINECTIO_H_

#include "KinectGrabber.hpp"
#include "geometry/Matrix4.hpp"

namespace lssr
{

class KinectIO
{
public:
	KinectIO();
	virtual ~KinectIO();

	PointBufferPtr getBuffer();

private:
	KinectGrabber* 			m_grabber;

	Freenect::Freenect*		m_freenect;

	Eigen::Matrix4f			m_depthMatrix;


};

} // namespace lssr

#endif /* KINECTIO_H_ */