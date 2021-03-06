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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecution.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API DescribeWorkflowExecutionRequest : public SWFRequest
  {
  public:
    DescribeWorkflowExecutionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline DescribeWorkflowExecutionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline DescribeWorkflowExecutionRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline DescribeWorkflowExecutionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>The workflow execution to describe.</p>
     */
    inline const WorkflowExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>The workflow execution to describe.</p>
     */
    inline void SetExecution(const WorkflowExecution& value) { m_executionHasBeenSet = true; m_execution = value; }

    /**
     * <p>The workflow execution to describe.</p>
     */
    inline void SetExecution(WorkflowExecution&& value) { m_executionHasBeenSet = true; m_execution = value; }

    /**
     * <p>The workflow execution to describe.</p>
     */
    inline DescribeWorkflowExecutionRequest& WithExecution(const WorkflowExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>The workflow execution to describe.</p>
     */
    inline DescribeWorkflowExecutionRequest& WithExecution(WorkflowExecution&& value) { SetExecution(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    WorkflowExecution m_execution;
    bool m_executionHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
