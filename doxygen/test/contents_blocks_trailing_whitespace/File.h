/** \file
 * \brief A file
 */

    /// \brief	Should this task be batched together with other matching tasks, where possible?
    /// 
    /// \remarks If this is non-zero, the renderer groups the task together with other tasks with a matching
    /// 		BatchID and draws them in batched mode, so that it can submit them all with one Draw
    /// 		call to the underlying graphics API.
    ///		 
    /// \remarks The BatchID should be the same for all RenderTasks setting the same state in Bind.
    /// 		The only thing that should differ between them is the BatchKey. Recommended way of
    /// 		generating this key is to use a hash of the memory addresses of all the bindables
    /// 		(buffers, resources) you set during Bind (See Material.cpp for an example of this).
    /// 
    /// \remarks Only applies to geometry layers.
    void foo();

// kate: replace-trailing-space-save off;
