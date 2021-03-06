﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API DisassociateQualificationFromWorkerRequest : public MTurkRequest
  {
  public:
    DisassociateQualificationFromWorkerRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:
    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;
    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
